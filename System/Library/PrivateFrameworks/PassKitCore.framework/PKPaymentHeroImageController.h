/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentHeroImageControllerDelegate;
#import <PassKitCore/PassKitCore-Structs.h>
@class PKPaymentHeroImageManifest, NSMutableArray, NSArray;

@interface PKPaymentHeroImageController : NSObject {

	PKPaymentHeroImageManifest* _manifest;
	NSMutableArray* _currentNetworksDownloading;
	id<PKPaymentHeroImageControllerDelegate> _delegate;
	long long _watchSize;
	NSArray* _featuredNetworks;

}

@property (assign,nonatomic) id<PKPaymentHeroImageControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long watchSize;                                            //@synthesize watchSize=_watchSize - In the implementation block
@property (nonatomic,copy) NSArray * featuredNetworks;                                       //@synthesize featuredNetworks=_featuredNetworks - In the implementation block
+(id)defaultPaymentCredentials;
+(BOOL)_networkImageHasDownloadedWithError:(id)arg1 ;
+(void)_addNetworkImageDownloadError:(id)arg1 downloadedSha1:(id)arg2 ;
-(id)primaryFeaturedNetwork;
-(BOOL)containsPaymentCredentialType:(long long)arg1 ;
-(id)initWithManifest:(id)arg1 featuredNetworks:(id)arg2 webService:(id)arg3 ;
-(void)setFeaturedNetworks:(NSArray *)arg1 ;
-(void)beginDownloadingRemoteImagesWithCompletion:(/*^block*/id)arg1 ;
-(void)_alertDelgateOfDownloadedImageData:(id)arg1 network:(id)arg2 error:(id)arg3 ;
-(void)downloadRemoteImageForNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_debugString;
-(id)_builtInNetworksCardImageData;
-(id)initWithManifest:(id)arg1 featuredNetworks:(id)arg2 ;
-(void)beginDownloadingRemoteImages;
-(id)featuredNetworksImageData;
-(CGSize)cardArtSizeForSize:(CGSize)arg1 ;
-(long long)watchSize;
-(void)setWatchSize:(long long)arg1 ;
-(NSArray *)featuredNetworks;
-(void)setDelegate:(id<PKPaymentHeroImageControllerDelegate>)arg1 ;
-(id<PKPaymentHeroImageControllerDelegate>)delegate;
@end

