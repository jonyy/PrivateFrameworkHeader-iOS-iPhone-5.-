/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDListDefinition, NSMutableArray, WDDocument;

@interface WDList : NSObject  {
    NSMutableArray *mLevelOverrides;
    WDDocument *mDocument;
    int mIndex;
    WDListDefinition *mListDefinition;
}


- (id)listDefinition;
- (int)levelOverrideCount;
- (id)levelOverrideAt:(int)arg1;
- (id)levelOverrides;
- (id)initWithDocument:(id)arg1 listDefinition:(id)arg2;
- (int)listId;
- (id)addLevelOverride;
- (void)setIndex:(int)arg1;
- (id)document;
- (int)index;
- (void)dealloc;

@end
