package gross

// Units stores the Gross Store unit measurements.
func Units() map[string]int {
	units := make(map[string]int)
	units["quarter_of_a_dozen"] = 3
	units["half_of_a_dozen"] = 6
	units["dozen"] = 12
	units["small_gross"] = 120
	units["gross"] = 144
	units["great_gross"] = 1728
	return units
}

// NewBill creates a new bill.
func NewBill() map[string]int {
	return map[string]int{}
}

// AddItem adds an item to customer bill.
func AddItem(bill, units map[string]int, item, unit string) bool {
	value, ok := units[unit]
	if !ok {
		return false
	}
	bill_val, amount := bill[item]
	if amount {
		bill[item] = bill_val + value
	} else {
		bill[item] = value
	}
	return true
}

// RemoveItem removes an item from customer bill.
func RemoveItem(bill, units map[string]int, item, unit string) bool {
	bill_item, ok := bill[item]
	if !ok {
		return false
	}

	unit_value, ok := units[unit]
	if !ok {
		return false
	}

	// Calculate new quantity
	new_quantity := bill_item - unit_value

	// If new quantity is negative, cannot remove
	if new_quantity < 0 {
		return false
	}

	// If new quantity is zero, remove item completely
	if new_quantity == 0 {
		delete(bill, item)
		return true
	}

	// Otherwise, update the quantity
	bill[item] = new_quantity
	return true
}

// GetItem returns the quantity of an item that the customer has in his/her bill.
func GetItem(bill map[string]int, item string) (int, bool) {
	qty, ok := bill[item]
	return qty, ok
}
