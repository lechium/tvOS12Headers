/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BirthdayRecord : NSObject {

	NSMutableDictionary* _record;
	BOOL _isEmpty;

}

@property (nonatomic,readonly) BOOL isEmpty;              //@synthesize isEmpty=_isEmpty - In the implementation block
-(BOOL)doesPerson:(void*)arg1 haveBirthday:(id)arg2 ;
-(void)recordBirthday:(id)arg1 forPerson:(void*)arg2 ;
-(id)init;
-(BOOL)isEmpty;
@end

