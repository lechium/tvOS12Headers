/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary, PHPhotoLibrary;

@interface PGSearchComputationCache : NSObject {

	NSURL* _persistentStoreURL;
	NSMutableDictionary* _momentAssetPairsByNodeUUID;
	NSMutableDictionary* _curationInformationByNodeUUID;
	NSMutableDictionary* _locationInformationByNodeUUID;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) NSURL * persistentStoreURL;                                       //@synthesize persistentStoreURL=_persistentStoreURL - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * momentAssetPairsByNodeUUID;                 //@synthesize momentAssetPairsByNodeUUID=_momentAssetPairsByNodeUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * curationInformationByNodeUUID;              //@synthesize curationInformationByNodeUUID=_curationInformationByNodeUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * locationInformationByNodeUUID;              //@synthesize locationInformationByNodeUUID=_locationInformationByNodeUUID - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                    //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(id)initWithManager:(id)arg1 ;
-(void)save;
-(PHPhotoLibrary *)photoLibrary;
-(void)invalidateCache;
-(id)keyAssetLocalIdentifierForNode:(id)arg1 withAssociatedMomentUUIDs:(id)arg2 ;
-(void)setKeyAssetLocalIdentifier:(id)arg1 forNode:(id)arg2 withAssociatedMomentUUID:(id)arg3 ;
-(id)curationInformationForNode:(id)arg1 ;
-(void)setCurationInformation:(id)arg1 forNode:(id)arg2 ;
-(BOOL)momentAssetPairs:(id)arg1 areValidWithAssociatedMomentUUIDs:(id)arg2 ;
-(void)setLocationInformation:(id)arg1 forLocationNode:(id)arg2 locationMask:(unsigned long long)arg3 ;
-(id)locationInformationForLocationNode:(id)arg1 locationMask:(unsigned long long)arg2 ;
-(NSURL *)persistentStoreURL;
-(NSMutableDictionary *)momentAssetPairsByNodeUUID;
-(NSMutableDictionary *)curationInformationByNodeUUID;
-(NSMutableDictionary *)locationInformationByNodeUUID;
@end

