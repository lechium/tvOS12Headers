/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@interface CSAudioFileManager : NSObject
+(id)_sharedAudioLoggingQueue;
+(void)_readDataFromFileHandle:(id)arg1 toFileHandle:(id)arg2 ;
+(id)_createAudioFileWriterWithLoggingDir:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
+(id)_createTempAudioFileWriterWithInputFormat:(AudioStreamBasicDescription)arg1 outputFormat:(AudioStreamBasicDescription)arg2 ;
+(id)_getDateLabel;
+(void)pruneNumberOfLogFilesTo:(unsigned long long)arg1 ;
+(void)generateDeviceAudioLogging:(id)arg1 numChannels:(unsigned)arg2 speechId:(id)arg3 ;
+(id)createAudioFileWriterFromWithInputFormat:(AudioStreamBasicDescription)arg1 outputFormat:(AudioStreamBasicDescription)arg2 ;
+(void)removeLogFilesOlderThanNDays:(float)arg1 ;
@end

