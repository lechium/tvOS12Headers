/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ML3DatabaseFunction : NSObject {

	int _argumentCount;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int argumentCount;              //@synthesize argumentCount=_argumentCount - In the implementation block
-(id)initWithName:(id)arg1 argumentCount:(int)arg2 ;
-(BOOL)registerWithConnection:(id)arg1 ;
-(int)argumentCount;
-(void)setArgumentCount:(int)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end

