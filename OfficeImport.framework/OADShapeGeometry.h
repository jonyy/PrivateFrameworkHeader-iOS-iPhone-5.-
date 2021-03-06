/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject  {
    BOOL mIsEscher;
    NSMutableDictionary *mAdjustValues;
}


- (BOOL)isEscher;
- (BOOL)hasAdjustValueAtIndex:(unsigned int)arg1;
- (id)adjustValues;
- (void)setAdjustValue:(long)arg1 atIndex:(unsigned int)arg2;
- (long)adjustValueAtIndex:(unsigned int)arg1;
- (void)setIsEscher:(BOOL)arg1;
- (id)init;
- (void)dealloc;

@end
