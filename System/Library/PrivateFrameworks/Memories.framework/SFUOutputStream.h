/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUOutputStream <SFUSimpleOutputStream>
@required
-(BOOL)canSeek;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2;
-(BOOL)canCreateInputStream;
-(id)inputStream;
-(long long)offset;
-(void)close;

@end

