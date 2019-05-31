/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSArray, NSData, NSSet, NSNumber, NSDictionary;

@interface VNClusterObservation : VNObservation {

	NSArray* _clusters;
	NSArray* _suggestionsForCluster;
	NSData* _clusterState;
	NSSet* _clusteredFaceIds;
	NSArray* _groupedClusteredFaceIdsForCluster;
	NSNumber* _distance;
	NSDictionary* _distancesById;

}

@property (nonatomic,retain) NSArray * clusters;                                       //@synthesize clusters=_clusters - In the implementation block
@property (nonatomic,retain) NSArray * suggestionsForCluster;                          //@synthesize suggestionsForCluster=_suggestionsForCluster - In the implementation block
@property (nonatomic,retain) NSData * clusterState;                                    //@synthesize clusterState=_clusterState - In the implementation block
@property (nonatomic,retain) NSSet * clusteredFaceIds;                                 //@synthesize clusteredFaceIds=_clusteredFaceIds - In the implementation block
@property (nonatomic,retain) NSArray * groupedClusteredFaceIdsForCluster;              //@synthesize groupedClusteredFaceIdsForCluster=_groupedClusteredFaceIdsForCluster - In the implementation block
@property (nonatomic,retain) NSNumber * distance;                                      //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSDictionary * distancesById;                             //@synthesize distancesById=_distancesById - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDistance:(NSNumber *)arg1 ;
-(NSNumber *)distance;
-(NSArray *)clusters;
-(void)setClusters:(NSArray *)arg1 ;
-(NSArray *)suggestionsForCluster;
-(NSSet *)clusteredFaceIds;
-(NSArray *)groupedClusteredFaceIdsForCluster;
-(NSDictionary *)distancesById;
-(void)setSuggestionsForCluster:(NSArray *)arg1 ;
-(void)setClusteredFaceIds:(NSSet *)arg1 ;
-(void)setGroupedClusteredFaceIdsForCluster:(NSArray *)arg1 ;
-(void)setDistancesById:(NSDictionary *)arg1 ;
-(void)setClusterState:(NSData *)arg1 ;
-(NSData *)clusterState;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

