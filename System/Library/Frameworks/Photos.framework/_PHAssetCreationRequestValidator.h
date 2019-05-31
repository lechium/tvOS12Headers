/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHValidator.h>

@class PHAssetCreationRequest, NSString;

@interface _PHAssetCreationRequestValidator : PHValidator {

	PHAssetCreationRequest* _assetCreationRequest;
	NSString* _validatedPairingIdentifier;
	SCD_Struct_PH1 _validatedVideoDuration;
	SCD_Struct_PH1 _validatedImageDisplayTime;

}

@property (nonatomic,__weak,readonly) PHAssetCreationRequest * assetCreationRequest;              //@synthesize assetCreationRequest=_assetCreationRequest - In the implementation block
@property (nonatomic,readonly) NSString * validatedPairingIdentifier;                             //@synthesize validatedPairingIdentifier=_validatedPairingIdentifier - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH1 validatedVideoDuration;                             //@synthesize validatedVideoDuration=_validatedVideoDuration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PH1 validatedImageDisplayTime;                          //@synthesize validatedImageDisplayTime=_validatedImageDisplayTime - In the implementation block
-(id)initWithAssetCreationRequest:(id)arg1 ;
-(NSString *)validatedPairingIdentifier;
-(SCD_Struct_PH1)validatedVideoDuration;
-(SCD_Struct_PH1)validatedImageDisplayTime;
-(PHAssetCreationRequest *)assetCreationRequest;
-(void)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2 videoDuration:(SCD_Struct_PH1*)arg3 imageDisplayTime:(SCD_Struct_PH1*)arg4 ;
@end

