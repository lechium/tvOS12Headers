/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLShuffledAlbum.h>

@class NSPredicate;

@interface PLFilteredShuffledAlbum : PLShuffledAlbum {

	int _filter;
	NSPredicate* _filterPredicate;

}

@property (nonatomic,readonly) int filter;                                        //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain,readonly) NSPredicate * filterPredicate;              //@synthesize filterPredicate=_filterPredicate - In the implementation block
+(NSObject*)_shuffledAlbumWithAlbum:(NSObject*)arg1 filter:(int)arg2 startingAsset:(id)arg3 ;
-(id)initWithBackingAlbum:(NSObject*)arg1 filter:(int)arg2 startingAsset:(id)arg3 ;
-(NSObject*)unshuffledAlbum;
-(void)createShuffledIndexesMaps;
-(NSPredicate *)filterPredicate;
-(void)dealloc;
-(unsigned long long)count;
-(int)filter;
@end

