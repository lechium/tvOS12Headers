/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPaymentWebService, NSDictionary, NSString;

@interface PKPaymentHeroImageManifest : NSObject {

	PKPaymentWebService* _webService;
	NSDictionary* _manifest;
	NSString* _preferredLanguage;

}
+(id)_manifestFileNameForRegion:(id)arg1 ;
+(BOOL)manifestFileExistsForRegion:(id)arg1 ;
+(void)removeManifestFileForRegion:(id)arg1 ;
-(id)initWithWebService:(id)arg1 ;
-(id)initWithWebService:(id)arg1 preferredLanguage:(id)arg2 ;
-(id)_readManifestDataFromDevice;
-(id)parseData:(id)arg1 ;
-(void)_downloadManifestWithCompletion:(/*^block*/id)arg1 ;
-(id)imageInfoForNetwork:(id)arg1 ;
-(id)urlForNetwork:(id)arg1 ;
-(BOOL)_deviceMeetsRequirementsForNetwork:(id)arg1 ;
-(id)_fileNameForNetworkImageOnDisk:(id)arg1 ;
-(void)setManifestWithData:(id)arg1 ;
-(void)_saveManifestDataToDevice:(id)arg1 ;
-(id)requirementsForNetwork:(id)arg1 ;
-(void)downloadRemoteManifestWithCompletion:(/*^block*/id)arg1 ;
-(id)sha1ForNetwork:(id)arg1 ;
-(id)imageURLsForFeaturedNetworks:(id)arg1 ;
-(id)imageDataOnDiskForNetwork:(id)arg1 ;
-(id)primaryFeaturedNetwork;
-(BOOL)containsPaymentCredentialType:(long long)arg1 ;
-(id)description;
@end

