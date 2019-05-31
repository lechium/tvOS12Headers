/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGCurationTrait.h>

@class NSIndexSet, NSDictionary;

@interface PGCurationIndexSetTrait : PGCurationTrait {

	NSIndexSet* _indexSet;
	NSDictionary* _thresholdByIdentifier;

}

@property (nonatomic,retain) NSDictionary * thresholdByIdentifier;              //@synthesize thresholdByIdentifier=_thresholdByIdentifier - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexSet;                           //@synthesize indexSet=_indexSet - In the implementation block
-(id)initWithIndexSet:(id)arg1 ;
-(NSDictionary *)thresholdByIdentifier;
-(double)thresholdForSceneIdentifier:(unsigned)arg1 ;
-(void)setThresholdByIdentifier:(NSDictionary *)arg1 ;
-(id)debugDescription;
-(BOOL)isActive;
-(NSIndexSet *)indexSet;
@end

