/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDictationConnectionTokenFilterProtocol <NSObject>
@required
-(CFStringRef)resultTransformForLanguageModel:(id)arg1;
-(id)dictationConnection:(id)arg1 willFilterTokensWithLanguageModel:(id)arg2 forFinalize:(BOOL)arg3;
-(BOOL)dictationConnection:(id)arg1 filterState:(id)arg2 shouldCheckpointAtToken:(id)arg3;
-(void)dictationConnection:(id)arg1 filterState:(id)arg2 processFilteredToken:(id)arg3 forFinalize:(BOOL)arg4;
-(void)dictationConnection:(id)arg1 didFilterTokensWithFilterState:(id)arg2 forFinalize:(BOOL)arg3;

@end

