/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGCurationTrait.h>

@class NSArray;

@interface PGCurationArrayTrait : PGCurationTrait {

	NSArray* _items;
	NSArray* _negativeItems;

}

@property (nonatomic,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * negativeItems;              //@synthesize negativeItems=_negativeItems - In the implementation block
-(id)initWithItems:(id)arg1 negativeItems:(id)arg2 ;
-(NSArray *)negativeItems;
-(id)debugDescription;
-(BOOL)isActive;
-(id)initWithItems:(id)arg1 ;
-(NSArray *)items;
@end

