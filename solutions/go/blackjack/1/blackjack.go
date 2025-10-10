package blackjack

var cards_values = map[string]int{
	"two":   2,
	"three": 3,
	"four":  4,
	"five":  5,
	"six":   6,
	"seven": 7,
	"eight": 8,
	"nine":  9,
	"ten":   10,
	"jack":  10,
	"queen": 10,
	"king":  10,
	"ace":   11,
	"other": 0,
}

// ParseCard returns the integer value of a card following blackjack ruleset.
func ParseCard(card string) int {
	return cards_values[card]
}

// FirstTurn returns the decision for the first turn, given two cards of the
// player and one card of the dealer.
func FirstTurn(card1, card2, dealerCard string) string {
	playerHand := sumHand(card1, card2)
	dealerHand := ParseCard(dealerCard)

	switch {
	case playerHand == 22:
		return "P"
	case playerHand == 21 && (dealerHand == 11 || dealerHand == 10):
		return "S"
	case playerHand == 21:
		return "W"
	case playerHand >= 17 && playerHand <= 20:
		return "S"
	case playerHand >= 12 && playerHand <= 16 && dealerHand >= 7:
		return "H"
	case playerHand >= 12 && playerHand <= 16 && dealerHand <= 6:
		return "S"
	case playerHand <= 11:
		return "H"
	}
	return "H"
}

func sumHand(card1, card2 string) int {
	return ParseCard(card1) + ParseCard(card2)
}
