import string


class Clock(object):
    def __init__(self, hours: int, minutes: int, seconds: int):
        self.hours = hours
        self.minutes = minutes
        self.seconds = seconds

        self.alarm_hours = 0
        self.alarm_minutes = 0
        self.alarm_seconds = 0

    def separate_time(self, time: string):
        """Takes a string (24 hour format HH:MM:SS)
        separates it into it's components, and returns them
         (hours, minutes, seconds) """
        try:
            hours, minutes, seconds = time.split(":")
            hours = int(hours)
            minutes = int(minutes)
            seconds = int(seconds)

            return hours, minutes, seconds
        except:
            print("Data format wrong!")

    def check_time(self, time: string) -> bool:
        """Takes in a string, class Clock.separate_time
            checks that values for hours, minutes, seconds
            are valid."""
        hours, minutes, seconds = self.separate_time(time)
        if (
            24 >= hours >= 0
            and 59 >= minutes >= 0
            and 59 >= seconds >= 0
        ):
            return True
        else:
            return False



    def change_time(self, time: string) -> None:
        """Takes in a string  (HH:MM:SS)
            checks if the time is in the
            correct format, if so it will
            update the current time"""

        if self.check_time(time):
            self.hours, self.minutes, self.seconds = self.separate_time(time)
            print("Time updated successfully")

    def __str__(self):
        return "Current time: {}:{}:{}\n" \
               "Alarm set: {}:{}:{}".\
               format(self.hours, self.minutes, self.seconds,
                      self.alarm_hours, self.alarm_minutes, self.alarm_seconds)

    def add_time(self, time: string) -> None:
        """Takes in a string, checks for format (HH:MM:SS)
            Separates it into it's components
            Adds this time to the current time"""
        if self.check_time(time):
            add_hours, add_minutes, add_seconds = self.separate_time(time)

            # Change time in order: seconds, minutes, hours

            # If the seconds go over 60 seconds, increment
            # the added minutes for every 60 seconds over
            add_minutes += int((self.seconds + add_seconds) / 60)

            # Add in the new value of seconds
            self.seconds = (self.seconds+add_seconds) % 60

            # If the minutes go over 60 minutes, increment
            # the added hours for every 60 minutes over
            add_hours += int((self.minutes + add_minutes) / 60)

            # Add in the new value for minutes
            self.minutes = (self.minutes + add_minutes) % 60

            # Add in the new value for hours
            self.hours = (self.hours + add_hours) % 24

            print("Time was added")

    def set_alarm(self, time: string) -> None:
        """Takes in a string, checks if
            correct format is used (HH:MM:DD,
            gives clock object alarm parameters:
            self.alarm_hours
            self.alarm_minutes
            self.alarm_seconds"""

        if self.check_time(time):
            self.alarm_hours, self.alarm_minutes, self.alarm_seconds = self.separate_time(time)

            print("Alarm set")

    def ring_alarm(self):
        """Compares the current clock time
            with the alarm time, if they are
            equal, an alarm will be set off"""

        if(
            self.hours == self.alarm_hours
            and self.minutes == self.alarm_minutes
            and self.seconds == self.alarm_seconds
        ):
            print("Song is now playing...")
        else:
            print("Not time to wake up yet!")


my_clock = Clock(12, 40, 50)
print(my_clock)

my_clock.change_time("19:40:55")
print(my_clock)

my_clock.add_time("6:00:08")
print(my_clock)

my_clock.set_alarm("01:41:03")
print(my_clock)

my_clock.ring_alarm()
