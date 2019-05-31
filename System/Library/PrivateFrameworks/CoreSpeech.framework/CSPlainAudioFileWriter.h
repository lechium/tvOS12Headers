/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/CSAudioFileWriter.h>

@class NSURL, NSString;

@interface CSPlainAudioFileWriter : NSObject <CSAudioFileWriter> {

	BOOL isWriting;
	OpaqueExtAudioFileRef fFile;
	AudioStreamBasicDescription inASBD;
	AudioStreamBasicDescription outASBD;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
-(BOOL)endAudio;
-(id)initWithFilepath:(id)arg1 ;
-(BOOL)addSamples:(const void*)arg1 numSamples:(long long)arg2 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)fileURL;
@end

