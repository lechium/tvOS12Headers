/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface AVAudioDeviceTestProcessingChain : NSObject <NSSecureCoding> {

	NSURL* _graphURL;
	NSURL* _processingStripURL;

}

@property (nonatomic,retain) NSURL * graphURL;                        //@synthesize graphURL=_graphURL - In the implementation block
@property (nonatomic,retain) NSURL * processingStripURL;              //@synthesize processingStripURL=_processingStripURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)processingStripURL;
-(void)setProcessingStripURL:(NSURL *)arg1 ;
-(NSURL *)graphURL;
-(void)setGraphURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

