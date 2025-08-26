// Package weather provides tools to predict weather forecast.
package weather

// CurrentCondition represents a current weather condition.
var CurrentCondition string

// CurrentLocation represents a current location.
var CurrentLocation string

// Forecast returns weather forecast for current city and current condition.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
