/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSCalendar, NSTimeZone, NSDateComponents, NSLocale, UILabel, NSString, NSDate, UIDatePicker;

@interface UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource> {
    struct { 
        unsigned int dateOrder : 2; 
        unsigned int timeOrder : 2; 
        unsigned int weekdayOrder : 1; 
        unsigned int staggerTimeIntervals : 1; 
        unsigned int loadingDateOrTime : 1; 
        unsigned int highlightsToday : 1; 
        unsigned int hasCustomCalendar : 1; 
        unsigned int reserved : 23; 
    NSString *_amString;
    NSCalendar *_calendar;
    double _countDownDuration;
    NSDate *_date;
    UIDatePicker *_datePickerDelegate;
    } _datePickerFlags;
    NSInteger _datePickerMode;
    id _delegateOfDatePicker;
    NSInteger _expectedAMPM;
    UILabel *_hourLabel;
    NSLocale *_locale;
    NSDateComponents *_maxDateComponents;
    NSDate *_maximumDate;
    NSDateComponents *_minDateComponents;
    NSDate *_minimumDate;
    NSInteger _minuteInterval;
    UILabel *_minuteLabel;
    NSInteger _numberOfDaysInCurrentMonth;
    NSString *_pmString;
    NSDateComponents *_referenceComponents;
    NSTimeZone *_timeZone;
    NSDateComponents *_todayDateComponents;
    double _todaySinceReferenceDate;
}

@property(copy) NSCalendar *calendar;
@property(copy) NSDate *date;
@property(retain) NSLocale *locale;
@property(copy) NSDate *maximumDate;
@property(copy) NSDate *minimumDate;
@property(retain) NSTimeZone *timeZone;
@property double countDownDuration;
@property NSInteger datePickerMode;
@property id delegateOfDatePicker;
@property(getter=_hasCustomCalendar,readonly) BOOL hasCustomCalendar;
@property NSInteger minuteInterval;

- (id)_ampmCellFont;
- (NSInteger)_columnForElement:(NSUInteger)arg1;
- (id)_createAccessoryViewWithText:(id)arg1 andFont:(id)arg2;
- (id)_createLabelWithString:(id)arg1 above:(id)arg2;
- (id)_datePickerCellFont;
- (void)_datePickerReset:(id)arg1;
- (NSInteger)_dayForRow:(NSInteger)arg1;
- (void)_doneLoadingDateOrTime;
- (NSUInteger)_elementForColumn:(NSInteger)arg1;
- (void)_ensureTodayIsSet;
- (NSInteger)_eraForRow:(NSInteger)arg1;
- (id)_fadeLabel:(id)arg1 toNewLabelWithString:(id)arg2 ifAnimated:(BOOL)arg3;
- (BOOL)_hasCustomCalendar;
- (NSInteger)_hourForRow:(NSInteger)arg1;
- (id)_hoursString;
- (id)_hrMinFont;
- (NSInteger)_incrementForElement:(NSUInteger)arg1;
- (NSInteger)_incrementedAmountForValue:(NSInteger)arg1 withElement:(NSUInteger)arg2;
- (void)_loadDateAnimated:(BOOL)arg1;
- (void)_loadDesignatorStrings;
- (NSInteger)_minuteForRow:(NSInteger)arg1;
- (id)_minutesString;
- (NSInteger)_monthForRow:(NSInteger)arg1;
- (NSInteger)_numberOfDaysInDate:(id)arg1;
- (NSInteger)_numberOfDaysInWeek;
- (BOOL)_scrollingAnyColumnExcept:(NSInteger)arg1;
- (NSInteger)_secondForRow:(NSInteger)arg1;
- (NSInteger)_selectedHourForColumn:(NSInteger)arg1;
- (NSInteger)_selectedMinuteForColumn:(NSInteger)arg1;
- (void)_setDateComponent:(id)arg1 withElement:(NSUInteger)arg2;
- (void)_setupCell:(id)arg1 atRow:(NSInteger)arg2 inColumn:(NSInteger)arg3 withElementFlag:(NSUInteger)arg4;
- (BOOL)_shouldEnableDayForRow:(NSInteger)arg1 column:(NSInteger)arg2;
- (BOOL)_shouldEnableHourForValue:(NSInteger)arg1 column:(NSInteger)arg2;
- (BOOL)_shouldEnableMinuteForValue:(NSInteger)arg1 column:(NSInteger)arg2;
- (BOOL)_shouldEnableMonthForRow:(NSInteger)arg1 column:(NSInteger)arg2;
- (BOOL)_shouldEnableWeekMonthDayForCell:(id)arg1;
- (BOOL)_shouldEnableYearForRow:(NSInteger)arg1;
- (BOOL)_showingDate;
- (id)_sizedPickerCellFont;
- (float)_tableRowHeight;
- (id)_todayTextColor;
- (void)_updateBitsForDate:(id)arg1 andReload:(BOOL)arg2 animateIfNeeded:(BOOL)arg3;
- (BOOL)_updateDateOrTime;
- (void)_updateEnabledCells:(BOOL)arg1;
- (void)_updateLabels:(BOOL)arg1;
- (void)_updateReferenceBits;
- (void)_updateRowInColumn:(NSInteger)arg1 toValue:(NSInteger)arg2 withRepeatingAmount:(NSInteger)arg3 element:(NSUInteger)arg4 animated:(BOOL)arg5;
- (NSInteger)_yearForRow:(NSInteger)arg1;
- (id)calendar;
- (double)countDownDuration;
- (id)date;
- (id)dateComponents;
- (NSInteger)datePickerMode;
- (void)dealloc;
- (id)delegateOfDatePicker;
- (NSInteger)hour;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)locale;
- (id)maximumDate;
- (id)minimumDate;
- (NSInteger)minute;
- (NSInteger)minuteInterval;
- (NSInteger)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerImageNamePrefix;
- (void)pickerView:(id)arg1 createdTable:(id)arg2 forColumn:(NSInteger)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(NSInteger)arg2 inComponent:(NSInteger)arg3;
- (NSInteger)pickerView:(id)arg1 numberOfRowsInComponent:(NSInteger)arg2;
- (float)pickerView:(id)arg1 rowHeightForComponent:(NSInteger)arg2;
- (id)pickerView:(id)arg1 viewForRow:(NSInteger)arg2 forComponent:(NSInteger)arg3 reusingView:(id)arg4;
- (float)pickerView:(id)arg1 widthForComponent:(NSInteger)arg2;
- (void)pickerViewLoaded:(id)arg1;
- (void)scrollerDidScroll:(id)arg1;
- (void)scrollerWillStartDragging:(id)arg1;
- (NSInteger)second;
- (void)setCalendar:(id)arg1;
- (void)setCountDownDuration:(double)arg1;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
- (void)setDate:(id)arg1;
- (void)setDateComponents:(id)arg1;
- (void)setDatePickerMode:(NSInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateOfDatePicker:(id)arg1;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setMinuteInterval:(NSInteger)arg1;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (void)setTimeZone:(id)arg1;
- (id)shadowColor;
- (id)timeZone;

@end
