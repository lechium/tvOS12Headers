/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCCaptionsSourceDelegate <NSObject>
@required
-(void)streamToken:(long long)arg1 didEnableCaptions:(BOOL)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didDisableCaptions:(BOOL)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2;

@end

