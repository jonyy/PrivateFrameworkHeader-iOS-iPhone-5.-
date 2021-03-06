/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString;

@interface _MFDADeferredDeleteMessageOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {
    NSString *_messageID;
}


- (id)initWithDeleteMessageRequest:(id)arg1;
- (BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end
