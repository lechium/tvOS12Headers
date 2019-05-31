/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSArray;

@interface AVCaptureResolvedPhotoSettingsInternal : NSObject {

	long long uniqueID;
	SCD_Struct_AV37 photoDimensions;
	SCD_Struct_AV37 rawPhotoDimensions;
	SCD_Struct_AV37 previewDimensions;
	SCD_Struct_AV37 embeddedThumbnailDimensions;
	BOOL livePhotoMovieEnabled;
	SCD_Struct_AV37 livePhotoMovieDimensions;
	BOOL turboModeEnabled;
	BOOL flashEnabled;
	BOOL HDREnabled;
	BOOL adjustedPhotoFiltersEnabled;
	BOOL EV0PhotoDeliveryEnabled;
	BOOL stillImageStabilizationEnabled;
	BOOL dualCameraFusionEnabled;
	BOOL squareCropEnabled;
	NSArray* photoManifest;

}
-(void)dealloc;
@end

