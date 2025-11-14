package booking

import (
	"fmt"
	"time"
)

// Schedule returns a time.Time from a string containing a date.
func Schedule(date string) time.Time {
	layouts := []string{
		"Monday, January 2, 2006 15:04:05",
		"January 2, 2006 15:04:05", // October 3, 2019 20:32:00
		"1/2/2006 15:04:05",        // 7/25/2019 13:45:00
	}
	for _, layout := range layouts {
		if t, err := time.Parse(layout, date); err == nil {
			return t
		}
	}
	return time.Now()
}

// HasPassed returns whether a date has passed.
func HasPassed(date string) bool {
	return time.Now().After(Schedule(date))
}

// IsAfternoonAppointment returns whether a time is in the afternoon.
func IsAfternoonAppointment(date string) bool {
	d := Schedule(date)
	return d.Hour() >= 12 && d.Hour() < 18
}

// Description returns a formatted string of the appointment time.
func Description(date string) string {
	d := Schedule(date)
	return fmt.Sprintf("You have an appointment on %s, %s %d, %d, at %d:%d.",
		d.Weekday(), d.Month(), d.Day(), d.Year(), d.Hour(), d.Minute())
}

// AnniversaryDate returns a Time with this year's anniversary.
func AnniversaryDate() time.Time {
	now := time.Now()
	return time.Date(now.Year(), time.September, 15, 0, 0, 0, 0, time.Now().UTC().Location())
}
