/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPLazySectionedCollectionDataSource <NSObject>
@optional
-(NSRange*)optionalSectionIndexTitlesRange;
-(long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
-(BOOL)hasSameContentAsDataSource:(id)arg1;
-(id)sectionIndexTitles;

@required
-(id)sectionAtIndex:(unsigned long long)arg1;
-(id)itemAtIndexPath:(id)arg1;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;

@end

