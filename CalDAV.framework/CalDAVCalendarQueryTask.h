/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask  {
    BOOL _syncEvents;
    BOOL _syncTodos;
    NSDateComponents *_eventFilterStartDate;
    NSDateComponents *_eventFilterEndDate;
    NSDateComponents *_todoFilterStartDate;
    NSDateComponents *_todoFilterEndDate;
}

@property(retain) NSDateComponents * todoFilterEndDate;
@property(retain) NSDateComponents * todoFilterStartDate;
@property(retain) NSDateComponents * eventFilterEndDate;
@property(retain) NSDateComponents * eventFilterStartDate;
@property BOOL syncTodos;
@property BOOL syncEvents;


- (id)description;
- (void)dealloc;
- (id)todoFilterEndDate;
- (id)todoFilterStartDate;
- (id)eventFilterEndDate;
- (id)eventFilterStartDate;
- (id)httpMethod;
- (id)requestBody;
- (id)_icsDateStringForNSDateComponents:(id)arg1;
- (void)_appendTimeRangeFilterToXMLData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_appendComponentFiltersToXMLData:(id)arg1;
- (void)setSyncEvents:(BOOL)arg1;
- (void)setSyncTodos:(BOOL)arg1;
- (BOOL)syncTodos;
- (BOOL)syncEvents;
- (void)setEventFilterStartDate:(id)arg1;
- (void)setEventFilterEndDate:(id)arg1;
- (void)setTodoFilterStartDate:(id)arg1;
- (void)setTodoFilterEndDate:(id)arg1;

@end
