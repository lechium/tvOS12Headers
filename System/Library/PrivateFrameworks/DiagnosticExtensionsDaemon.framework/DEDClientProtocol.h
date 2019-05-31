/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DEDClientProtocol <NSObject>
@optional
-(long long)transportType;
-(void)didCancelSession:(id)arg1;

@required
-(void)pongSession:(id)arg1;
-(void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
-(void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
-(void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3;
-(void)didCommitSession:(id)arg1;
-(void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
-(void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;
-(void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;

@end

