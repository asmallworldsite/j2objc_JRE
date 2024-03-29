//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/Clock.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeClock")
#ifdef RESTRICT_JavaTimeClock
#define INCLUDE_ALL_JavaTimeClock 0
#else
#define INCLUDE_ALL_JavaTimeClock 1
#endif
#undef RESTRICT_JavaTimeClock
#ifdef INCLUDE_JavaTimeClock_TickClock
#define INCLUDE_JavaTimeClock 1
#endif
#ifdef INCLUDE_JavaTimeClock_OffsetClock
#define INCLUDE_JavaTimeClock 1
#endif
#ifdef INCLUDE_JavaTimeClock_FixedClock
#define INCLUDE_JavaTimeClock 1
#endif
#ifdef INCLUDE_JavaTimeClock_SystemClock
#define INCLUDE_JavaTimeClock 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeClock_) && (INCLUDE_ALL_JavaTimeClock || defined(INCLUDE_JavaTimeClock))
#define JavaTimeClock_

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaTimeDuration;
@class JavaTimeInstant;
@class JavaTimeZoneId;

/*!
 @brief A clock providing access to the current instant, date and time using a time-zone.
 <p>
  Instances of this class are used to find the current instant, which can be
  interpreted using the stored time-zone to find the current date and time.
  As such, a clock can be used instead of <code>System.currentTimeMillis()</code>
  and <code>TimeZone.getDefault()</code>.
  <p>
  Use of a <code>Clock</code> is optional. All key date-time classes also have a 
 <code>now()</code> factory method that uses the system clock in the default time zone.
  The primary purpose of this abstraction is to allow alternate clocks to be
  plugged in as and when required. Applications use an object to obtain the
  current time rather than a static method. This can simplify testing. 
 <p>
  Best practice for applications is to pass a <code>Clock</code> into any method
  that requires the current instant. A dependency injection framework is one
  way to achieve this: 
 @code

   public class MyBean {
     private Clock clock;  // dependency inject
     ...
     public void process(LocalDate eventDate) {
       if (eventDate.isBefore(LocalDate.now(clock)) {
         ...
       }     }     }    
  
@endcode
  This approach allows an alternate clock, such as <code>fixed</code>
  or <code>offset</code> to be used during testing. 
 <p>
  The <code>system</code> factory methods provide clocks based on the best available
  system clock This may use <code>System.currentTimeMillis()</code>, or a higher
  resolution clock if one is available.
 @since 1.8
 */
@interface JavaTimeClock : NSObject

#pragma mark Public

/*!
 @brief Checks if this clock is equal to another clock.
 <p>
  Clocks should override this method to compare equals based on
  their state and to meet the contract of <code>Object.equals</code>.
  If not overridden, the behavior is defined by <code>Object.equals</code>
 @param obj the object to check, null returns false
 @return true if this is equal to the other clock
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Obtains a clock that always returns the same instant.
 <p>
  This clock simply returns the specified instant.
  As such, it is not a clock in the conventional sense.
  The main use case for this is in testing, where the fixed clock ensures
  tests are not dependent on the current clock. 
 <p>
  The returned implementation is immutable, thread-safe and <code>Serializable</code>.
 @param fixedInstant the instant to use as the clock, not null
 @param zone the time-zone to use to convert the instant to date-time, not null
 @return a clock that always returns the same instant, not null
 */
+ (JavaTimeClock *)fixedWithJavaTimeInstant:(JavaTimeInstant *)fixedInstant
                         withJavaTimeZoneId:(JavaTimeZoneId *)zone;

/*!
 @brief Gets the time-zone being used to create dates and times.
 <p>
  A clock will typically obtain the current instant and then convert that
  to a date or time using a time-zone. This method returns the time-zone used.
 @return the time-zone being used to interpret instants, not null
 */
- (JavaTimeZoneId *)getZone;

/*!
 @brief A hash code for this clock.
 <p>
  Clocks should override this method based on
  their state and to meet the contract of <code>Object.hashCode</code>.
  If not overridden, the behavior is defined by <code>Object.hashCode</code>
 @return a suitable hash code
 */
- (NSUInteger)hash;

/*!
 @brief Gets the current instant of the clock.
 <p>
  This returns an instant representing the current instant as defined by the clock.
 @return the current instant from this clock, not null
 @throw DateTimeExceptionif the instant cannot be obtained, not thrown by most implementations
 */
- (JavaTimeInstant *)instant;

/*!
 @brief Gets the current millisecond instant of the clock.
 <p>
  This returns the millisecond-based instant, measured from 1970-01-01T00:00Z (UTC).
  This is equivalent to the definition of <code>System.currentTimeMillis()</code>.
  <p>
  Most applications should avoid this method and use <code>Instant</code> to represent
  an instant on the time-line rather than a raw millisecond value.
  This method is provided to allow the use of the clock in high performance use cases
  where the creation of an object would be unacceptable. 
 <p>
  The default implementation currently calls <code>instant</code>.
 @return the current millisecond instant from this clock, measured from
   the Java epoch of 1970-01-01T00:00Z (UTC), not null
 @throw DateTimeExceptionif the instant cannot be obtained, not thrown by most implementations
 */
- (jlong)millis;

/*!
 @brief Obtains a clock that returns instants from the specified clock with the
  specified duration added
 <p>
  This clock wraps another clock, returning instants that are later by the
  specified duration.
 If the duration is negative, the instants will be
  earlier than the current date and time.
  The main use case for this is to simulate running in the future or in the past. 
 <p>
  A duration of zero would have no offsetting effect.
  Passing zero will return the underlying clock. 
 <p>
  The returned implementation is immutable, thread-safe and <code>Serializable</code>
  providing that the base clock is.
 @param baseClock the base clock to add the duration to, not null
 @param offsetDuration the duration to add, not null
 @return a clock based on the base clock with the duration added, not null
 */
+ (JavaTimeClock *)offsetWithJavaTimeClock:(JavaTimeClock *)baseClock
                      withJavaTimeDuration:(JavaTimeDuration *)offsetDuration;

/*!
 @brief Obtains a clock that returns the current instant using best available
  system clock.
 <p>
  This clock is based on the best available system clock.
  This may use <code>System.currentTimeMillis()</code>, or a higher resolution
  clock if one is available. 
 <p>
  Conversion from instant to date or time uses the specified time-zone. 
 <p>
  The returned implementation is immutable, thread-safe and <code>Serializable</code>.
 @param zone the time-zone to use to convert the instant to date-time, not null
 @return a clock that uses the best available system clock in the specified zone, not null
 */
+ (JavaTimeClock *)systemWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

/*!
 @brief Obtains a clock that returns the current instant using the best available
  system clock, converting to date and time using the default time-zone.
 <p>
  This clock is based on the best available system clock.
  This may use <code>System.currentTimeMillis()</code>, or a higher resolution
  clock if one is available. 
 <p>
  Using this method hard codes a dependency to the default time-zone into your application.
  It is recommended to avoid this and use a specific time-zone whenever possible.
  The <code>UTC clock</code> should be used when you need the current instant
  without the date or time. 
 <p>
  The returned implementation is immutable, thread-safe and <code>Serializable</code>.
  It is equivalent to <code>system(ZoneId.systemDefault())</code>.
 @return a clock that uses the best available system clock in the default zone, not null
 - seealso: ZoneId#systemDefault()
 */
+ (JavaTimeClock *)systemDefaultZone;

/*!
 @brief Obtains a clock that returns the current instant using the best available
  system clock, converting to date and time using the UTC time-zone.
 <p>
  This clock, rather than <code>systemDefaultZone()</code>, should be used when
  you need the current instant without the date or time. 
 <p>
  This clock is based on the best available system clock.
  This may use <code>System.currentTimeMillis()</code>, or a higher resolution
  clock if one is available. 
 <p>
  Conversion from instant to date or time uses the UTC time-zone.
  <p>
  The returned implementation is immutable, thread-safe and <code>Serializable</code>.
  It is equivalent to <code>system(ZoneOffset.UTC)</code>.
 @return a clock that uses the best available system clock in the UTC zone, not null
 */
+ (JavaTimeClock *)systemUTC;

/*!
 @brief Obtains a clock that returns instants from the specified clock truncated
  to the nearest occurrence of the specified duration.
 <p>
  This clock will only tick as per the specified duration. Thus, if the duration
  is half a second, the clock will return instants truncated to the half second. 
 <p>
  The tick duration must be positive. If it has a part smaller than a whole
  millisecond, then the whole duration must divide into one second without
  leaving a remainder. All normal tick durations will match these criteria,
  including any multiple of hours, minutes, seconds and milliseconds, and
  sensible nanosecond durations, such as 20ns, 250,000ns and 500,000ns. 
 <p>
  A duration of zero or one nanosecond would have no truncation effect.
  Passing one of these will return the underlying clock. 
 <p>
  Implementations may use a caching strategy for performance reasons.
  As such, it is possible that the start of the requested duration observed
  via this clock will be later than that observed directly via the underlying clock. 
 <p>
  The returned implementation is immutable, thread-safe and <code>Serializable</code>
  providing that the base clock is.
 @param baseClock the base clock to base the ticking clock on, not null
 @param tickDuration the duration of each visible tick, not negative, not null
 @return a clock that ticks in whole units of the duration, not null
 @throw IllegalArgumentExceptionif the duration is negative, or has a
   part smaller than a whole millisecond such that the whole duration is not
   divisible into one second
 @throw ArithmeticExceptionif the duration is too large to be represented as nanos
 */
+ (JavaTimeClock *)tickWithJavaTimeClock:(JavaTimeClock *)baseClock
                    withJavaTimeDuration:(JavaTimeDuration *)tickDuration;

/*!
 @brief Obtains a clock that returns the current instant ticking in whole minutes
  using best available system clock.
 <p>
  This clock will always have the nano-of-second and second-of-minute fields set to zero.
  This ensures that the visible time ticks in whole minutes.
  The underlying clock is the best available system clock, equivalent to
  using <code>system(ZoneId)</code>.
  <p>
  Implementations may use a caching strategy for performance reasons.
  As such, it is possible that the start of the minute observed via this
  clock will be later than that observed directly via the underlying clock. 
 <p>
  The returned implementation is immutable, thread-safe and <code>Serializable</code>.
  It is equivalent to <code>tick(system(zone), Duration.ofMinutes(1))</code>.
 @param zone the time-zone to use to convert the instant to date-time, not null
 @return a clock that ticks in whole minutes using the specified zone, not null
 */
+ (JavaTimeClock *)tickMinutesWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

/*!
 @brief Obtains a clock that returns the current instant ticking in whole seconds
  using best available system clock.
 <p>
  This clock will always have the nano-of-second field set to zero.
  This ensures that the visible time ticks in whole seconds.
  The underlying clock is the best available system clock, equivalent to
  using <code>system(ZoneId)</code>.
  <p>
  Implementations may use a caching strategy for performance reasons.
  As such, it is possible that the start of the second observed via this
  clock will be later than that observed directly via the underlying clock. 
 <p>
  The returned implementation is immutable, thread-safe and <code>Serializable</code>.
  It is equivalent to <code>tick(system(zone), Duration.ofSeconds(1))</code>.
 @param zone the time-zone to use to convert the instant to date-time, not null
 @return a clock that ticks in whole seconds using the specified zone, not null
 */
+ (JavaTimeClock *)tickSecondsWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

/*!
 @brief Returns a copy of this clock with a different time-zone.
 <p>
  A clock will typically obtain the current instant and then convert that
  to a date or time using a time-zone. This method returns a clock with
  similar properties but using a different time-zone.
 @param zone the time-zone to change to, not null
 @return a clock based on this clock with the specified time-zone, not null
 */
- (JavaTimeClock *)withZoneWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

#pragma mark Protected

/*!
 @brief Constructor accessible by subclasses.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeClock)

FOUNDATION_EXPORT JavaTimeClock *JavaTimeClock_systemUTC(void);

FOUNDATION_EXPORT JavaTimeClock *JavaTimeClock_systemDefaultZone(void);

FOUNDATION_EXPORT JavaTimeClock *JavaTimeClock_systemWithJavaTimeZoneId_(JavaTimeZoneId *zone);

FOUNDATION_EXPORT JavaTimeClock *JavaTimeClock_tickSecondsWithJavaTimeZoneId_(JavaTimeZoneId *zone);

FOUNDATION_EXPORT JavaTimeClock *JavaTimeClock_tickMinutesWithJavaTimeZoneId_(JavaTimeZoneId *zone);

FOUNDATION_EXPORT JavaTimeClock *JavaTimeClock_tickWithJavaTimeClock_withJavaTimeDuration_(JavaTimeClock *baseClock, JavaTimeDuration *tickDuration);

FOUNDATION_EXPORT JavaTimeClock *JavaTimeClock_fixedWithJavaTimeInstant_withJavaTimeZoneId_(JavaTimeInstant *fixedInstant, JavaTimeZoneId *zone);

FOUNDATION_EXPORT JavaTimeClock *JavaTimeClock_offsetWithJavaTimeClock_withJavaTimeDuration_(JavaTimeClock *baseClock, JavaTimeDuration *offsetDuration);

FOUNDATION_EXPORT void JavaTimeClock_init(JavaTimeClock *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeClock)

#endif

#if !defined (JavaTimeClock_SystemClock_) && (INCLUDE_ALL_JavaTimeClock || defined(INCLUDE_JavaTimeClock_SystemClock))
#define JavaTimeClock_SystemClock_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaTimeClock;
@class JavaTimeInstant;
@class JavaTimeZoneId;

/*!
 @brief Implementation of a clock that always returns the latest time from 
 <code>System.currentTimeMillis()</code>.
 */
@interface JavaTimeClock_SystemClock : JavaTimeClock < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (JavaTimeZoneId *)getZone;

- (NSUInteger)hash;

- (JavaTimeInstant *)instant;

- (jlong)millis;

- (NSString *)description;

- (JavaTimeClock *)withZoneWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeClock_SystemClock)

FOUNDATION_EXPORT void JavaTimeClock_SystemClock_initWithJavaTimeZoneId_(JavaTimeClock_SystemClock *self, JavaTimeZoneId *zone);

FOUNDATION_EXPORT JavaTimeClock_SystemClock *new_JavaTimeClock_SystemClock_initWithJavaTimeZoneId_(JavaTimeZoneId *zone) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTimeClock_SystemClock *create_JavaTimeClock_SystemClock_initWithJavaTimeZoneId_(JavaTimeZoneId *zone);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeClock_SystemClock)

#endif

#if !defined (JavaTimeClock_FixedClock_) && (INCLUDE_ALL_JavaTimeClock || defined(INCLUDE_JavaTimeClock_FixedClock))
#define JavaTimeClock_FixedClock_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaTimeClock;
@class JavaTimeInstant;
@class JavaTimeZoneId;

/*!
 @brief Implementation of a clock that always returns the same instant.
 This is typically used for testing.
 */
@interface JavaTimeClock_FixedClock : JavaTimeClock < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (JavaTimeZoneId *)getZone;

- (NSUInteger)hash;

- (JavaTimeInstant *)instant;

- (jlong)millis;

- (NSString *)description;

- (JavaTimeClock *)withZoneWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaTimeInstant:(JavaTimeInstant *)fixedInstant
                               withJavaTimeZoneId:(JavaTimeZoneId *)zone;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeClock_FixedClock)

FOUNDATION_EXPORT void JavaTimeClock_FixedClock_initWithJavaTimeInstant_withJavaTimeZoneId_(JavaTimeClock_FixedClock *self, JavaTimeInstant *fixedInstant, JavaTimeZoneId *zone);

FOUNDATION_EXPORT JavaTimeClock_FixedClock *new_JavaTimeClock_FixedClock_initWithJavaTimeInstant_withJavaTimeZoneId_(JavaTimeInstant *fixedInstant, JavaTimeZoneId *zone) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTimeClock_FixedClock *create_JavaTimeClock_FixedClock_initWithJavaTimeInstant_withJavaTimeZoneId_(JavaTimeInstant *fixedInstant, JavaTimeZoneId *zone);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeClock_FixedClock)

#endif

#if !defined (JavaTimeClock_OffsetClock_) && (INCLUDE_ALL_JavaTimeClock || defined(INCLUDE_JavaTimeClock_OffsetClock))
#define JavaTimeClock_OffsetClock_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaTimeClock;
@class JavaTimeDuration;
@class JavaTimeInstant;
@class JavaTimeZoneId;

/*!
 @brief Implementation of a clock that adds an offset to an underlying clock.
 */
@interface JavaTimeClock_OffsetClock : JavaTimeClock < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (JavaTimeZoneId *)getZone;

- (NSUInteger)hash;

- (JavaTimeInstant *)instant;

- (jlong)millis;

- (NSString *)description;

- (JavaTimeClock *)withZoneWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaTimeClock:(JavaTimeClock *)baseClock
                           withJavaTimeDuration:(JavaTimeDuration *)offset;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeClock_OffsetClock)

FOUNDATION_EXPORT void JavaTimeClock_OffsetClock_initWithJavaTimeClock_withJavaTimeDuration_(JavaTimeClock_OffsetClock *self, JavaTimeClock *baseClock, JavaTimeDuration *offset);

FOUNDATION_EXPORT JavaTimeClock_OffsetClock *new_JavaTimeClock_OffsetClock_initWithJavaTimeClock_withJavaTimeDuration_(JavaTimeClock *baseClock, JavaTimeDuration *offset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTimeClock_OffsetClock *create_JavaTimeClock_OffsetClock_initWithJavaTimeClock_withJavaTimeDuration_(JavaTimeClock *baseClock, JavaTimeDuration *offset);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeClock_OffsetClock)

#endif

#if !defined (JavaTimeClock_TickClock_) && (INCLUDE_ALL_JavaTimeClock || defined(INCLUDE_JavaTimeClock_TickClock))
#define JavaTimeClock_TickClock_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaTimeClock;
@class JavaTimeInstant;
@class JavaTimeZoneId;

/*!
 @brief Implementation of a clock that adds an offset to an underlying clock.
 */
@interface JavaTimeClock_TickClock : JavaTimeClock < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (JavaTimeZoneId *)getZone;

- (NSUInteger)hash;

- (JavaTimeInstant *)instant;

- (jlong)millis;

- (NSString *)description;

- (JavaTimeClock *)withZoneWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaTimeClock:(JavaTimeClock *)baseClock
                                       withLong:(jlong)tickNanos;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeClock_TickClock)

FOUNDATION_EXPORT void JavaTimeClock_TickClock_initWithJavaTimeClock_withLong_(JavaTimeClock_TickClock *self, JavaTimeClock *baseClock, jlong tickNanos);

FOUNDATION_EXPORT JavaTimeClock_TickClock *new_JavaTimeClock_TickClock_initWithJavaTimeClock_withLong_(JavaTimeClock *baseClock, jlong tickNanos) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTimeClock_TickClock *create_JavaTimeClock_TickClock_initWithJavaTimeClock_withLong_(JavaTimeClock *baseClock, jlong tickNanos);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeClock_TickClock)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaTimeClock")
