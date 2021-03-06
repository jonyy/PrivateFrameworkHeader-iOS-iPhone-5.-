/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSNumber, NSMutableOrderedSet, PLManagedAsset, NSOrderedSet, NSDictionary, NSString, UIImage, NSURL, NSArray;

@interface PLItemAlbum : NSObject <PLAssetContainer> {
    NSArray *_items;
    NSMutableOrderedSet *_assets;
    NSString *_uuid;
    NSString *_title;
    NSDictionary *_slideshowSettings;
}

@property(retain) NSArray * items;
@property(readonly) NSString * uuid;
@property(readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(readonly) NSString * title;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSOrderedSet * assets;
@property(readonly) NSMutableOrderedSet * mutableAssets;
@property(readonly) unsigned int count;
@property(readonly) unsigned int photosCount;
@property(readonly) unsigned int videosCount;
@property(readonly) BOOL isEmpty;
@property(readonly) NSString * name;
@property(retain) PLManagedAsset * keyAsset;
@property(readonly) UIImage * posterImage;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(retain) NSString * importSessionID;
@property(readonly) NSURL * groupURL;
@property unsigned int pendingItemsCount;
@property unsigned int pendingItemsType;


- (id)localizedTitle;
- (id)posterImage;
- (id)kind;
- (id)initWithItems:(id)arg1;
- (void)setItems:(id)arg1;
- (id)items;
- (id)title;
- (id)name;
- (BOOL)isEmpty;
- (void)setAssets:(id)arg1;
- (void)setPendingItemsType:(unsigned int)arg1;
- (unsigned int)pendingItemsType;
- (void)setPendingItemsCount:(unsigned int)arg1;
- (unsigned int)pendingItemsCount;
- (id)groupURL;
- (void)setImportSessionID:(id)arg1;
- (id)importSessionID;
- (BOOL)shouldDeleteWhenEmpty;
- (BOOL)isLibrary;
- (void)setKeyAsset:(id)arg1;
- (id)keyAsset;
- (void)updateStackedImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (unsigned int)videosCount;
- (unsigned int)photosCount;
- (int)kindValue;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isCameraAlbum;
- (id)mutableAssets;
- (BOOL)canPerformEditOperation:(int)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (id)slideshowSettings;
- (id)uuid;
- (id)assets;
- (unsigned int)count;
- (void)dealloc;

@end
