/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSDictionary;

@interface SSRemoteNotification : NSObject  {
    NSDictionary *_userInfo;
}

@property(readonly) int actionType;
@property(readonly) NSString * alertBodyString;
@property(readonly) NSString * alertCancelString;
@property(readonly) NSString * alertOKString;
@property(readonly) NSString * alertTitleString;
@property(readonly) id badgeValue;
@property(readonly) NSString * soundFileName;
@property(readonly) NSDictionary * notificationUserInfo;


- (id)notificationUserInfo;
- (id)soundFileName;
- (id)alertTitleString;
- (id)alertOKString;
- (id)alertCancelString;
- (id)alertBodyString;
- (id)_valueForAlertKey:(id)arg1;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)badgeValue;
- (void)dealloc;
- (int)actionType;

@end
