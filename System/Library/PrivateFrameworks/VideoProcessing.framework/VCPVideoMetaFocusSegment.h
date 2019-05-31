/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPMetaSegment.h>

@interface VCPVideoMetaFocusSegment : VCPMetaSegment {

	long long _focusStatus;

}

@property (assign) long long focusStatus;              //@synthesize focusStatus=_focusStatus - In the implementation block
-(void)resetSegment:(long long)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(long long)focusStatus;
-(id)initWithFocusStatus:(long long)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(void)updateSegment:(long long)arg1 atTime:(SCD_Struct_VC6)arg2 ;
-(void)setFocusStatus:(long long)arg1 ;
@end

