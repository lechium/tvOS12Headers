/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMTranscoder : NSObject
+(id)supportedUTIs;
+(BOOL)supportsUTI:(id)arg1 ;
-(long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 ;
-(void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(/*^block*/id)arg9 ;
-(void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)transcodeProcessingRequired:(long long)arg1 ;
@end

