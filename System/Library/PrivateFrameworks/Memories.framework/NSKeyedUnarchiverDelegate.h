/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSKeyedUnarchiverDelegate <NSObject>
@optional
-(void)unarchiverWillFinish:(id)arg1;
-(void)unarchiverDidFinish:(id)arg1;
-(void)unarchiver:(id)arg1 willReplaceObject:(id)arg2 withObject:(id)arg3;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
-(id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;

@end

