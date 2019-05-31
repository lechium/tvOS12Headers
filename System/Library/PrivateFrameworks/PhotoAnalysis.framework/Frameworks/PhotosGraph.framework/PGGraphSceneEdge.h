/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphEdge.h>

@interface PGGraphSceneEdge : PGGraphEdge

@property (nonatomic,readonly) BOOL isReliable; 
@property (nonatomic,readonly) BOOL isSearchableForEvent; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (nonatomic,readonly) unsigned long long numberOfHighConfidenceAssets; 
@property (nonatomic,readonly) unsigned long long numberOfSearchConfidenceAssets; 
-(unsigned long long)numberOfAssets;
-(BOOL)isReliable;
-(unsigned long long)numberOfSearchConfidenceAssets;
-(unsigned long long)numberOfHighConfidenceAssets;
-(BOOL)isSearchableForEvent;
-(id)debugDescription;
@end

