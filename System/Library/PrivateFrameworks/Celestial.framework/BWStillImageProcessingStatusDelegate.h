/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWStillImageProcessingStatusDelegate <NSObject>
@required
-(void)nodeDidCaptureStillImage:(id)arg1;
-(void)node:(id)arg1 didSelectReferenceFrameBracketedCaptureSequenceNumber:(id)arg2 pts:(SCD_Struct_BW2)arg3;
-(void)node:(id)arg1 didReceiveOriginalImageWithPTS:(SCD_Struct_BW2)arg2;

@end
