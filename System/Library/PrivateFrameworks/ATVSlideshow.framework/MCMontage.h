/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, NSRecursiveLock, MCPlug, NSString, NSArray;

@interface MCMontage : NSObject {

	NSDictionary* mImprintWhileLoading;
	NSMutableDictionary* mVideoAssetsForFilePaths;
	NSMutableDictionary* mVideoAssetsForObjectIDs;
	NSMutableDictionary* mAudioAssetsForFilePaths;
	NSMutableDictionary* mAudioAssetsForObjectIDs;
	NSMutableDictionary* mContainersForObjectIDs;
	NSRecursiveLock* mLock;
	MCPlug* mRootPlug;
	double mFadeInDuration;
	double mFadeOutDuration;
	double mAudioFadeOutDuration;
	NSString* mBasePath;
	unsigned long long mUUIDSeed;
	NSArray* mLayouts;

}

@property (nonatomic,readonly) MCPlug * rootPlug; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (copy) NSString * basePath; 
@property (nonatomic,readonly) unsigned long long uuidSeed; 
@property (retain) NSArray * layouts; 
-(NSArray *)layouts;
-(void)setBasePath:(NSString *)arg1 ;
-(NSString *)basePath;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)assets;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(double)audioFadeOutDuration;
-(id)createParallelizerContainer;
-(id)audioAssetForFileAtPath:(id)arg1 ;
-(id)initFromScratch;
-(MCPlug *)rootPlug;
-(void)demolish;
-(id)videoAssetForFileAtPath:(id)arg1 ;
-(id)createEffectContainer;
-(id)createNavigatorContainer;
-(id)containerForObjectID:(id)arg1 ;
-(id)createSerializerContainer;
-(id)imprint;
-(void)forgetAboutContainer:(id)arg1 ;
-(id)videoAssetForObjectID:(id)arg1 ;
-(id)audioAssetForObjectID:(id)arg1 ;
-(unsigned long long)uuidSeed;
-(id)assetForObjectID:(id)arg1 ;
-(id)videoAssets;
-(id)audioAssets;
-(void)registerContainer:(id)arg1 ;
-(void)setLayouts:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)data;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
@end
