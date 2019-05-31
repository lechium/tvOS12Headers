/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>
#import <libobjc.A.dylib/PGGraphSynonymSupport.h>

@class NSString, NSArray;

@interface PGGraphMeaningNode : PGGraphNode <PGGraphLocalizable, PGGraphSynonymSupport> {

	long long _isVeryMeaningfulCachedValue;

}

@property (assign,nonatomic) long long isVeryMeaningfulCachedValue;                      //@synthesize isVeryMeaningfulCachedValue=_isVeryMeaningfulCachedValue - In the implementation block
@property (readonly) PGGraphMeaningNode * parentMeaningNode; 
@property (getter=isVeryMeaningful,nonatomic,readonly) BOOL veryMeaningful; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSArray * localizedSynonyms; 
+(id)meaningLabelsForMeaningNodes:(id)arg1 ;
-(id)momentNodes;
-(void)enumerateCollectionNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)associatedNodesForRemoval;
-(NSArray *)localizedSynonyms;
-(void)traverseParentMeaningHierarchyUsingBlock:(/*^block*/id)arg1 ;
-(PGGraphMeaningNode *)parentMeaningNode;
-(BOOL)isVeryMeaningful;
-(void)traverseSubmeaningHierarchyUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSubmeaningsUsingBlock:(/*^block*/id)arg1 ;
-(id)_localizationKeyForMeaningLabel:(id)arg1 ;
-(long long)isVeryMeaningfulCachedValue;
-(void)setIsVeryMeaningfulCachedValue:(long long)arg1 ;
-(NSString *)localizedName;
@end

