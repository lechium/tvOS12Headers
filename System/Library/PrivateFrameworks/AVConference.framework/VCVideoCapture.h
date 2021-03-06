/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VideoCaptureServer;
@class NSObject;

@interface VCVideoCapture : NSObject {

	NSObject*<VideoCaptureServer> _captureServer;

}

@property (readonly) NSObject*<VideoCaptureServer> captureServer; 
-(id)initWithCaptureServer:(id)arg1 ;
-(NSObject*<VideoCaptureServer>)captureServer;
-(void)dealloc;
@end

