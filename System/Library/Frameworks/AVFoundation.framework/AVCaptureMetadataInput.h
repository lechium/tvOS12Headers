/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureMetadataInputInternal;

@interface AVCaptureMetadataInput : AVCaptureInput {

	AVCaptureMetadataInputInternal* _internal;

}
+(id)metadataInputWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 clock:(OpaqueCMClockRef)arg2 ;
-(OpaqueCMClockRef)clock;
-(id)initWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 clock:(OpaqueCMClockRef)arg2 ;
-(id)ports;
-(BOOL)appendTimedMetadataGroup:(id)arg1 error:(id*)arg2 ;
-(id)sourceID;
-(id)init;
-(void)dealloc;
@end

