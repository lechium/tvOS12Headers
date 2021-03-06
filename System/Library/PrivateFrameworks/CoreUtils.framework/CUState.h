/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray, NSString;

@interface CUState : NSObject {

	/*^block*/id _eventHandler;
	unsigned long long _index;
	NSPointerArray* _lcaMap;
	NSString* _name;
	CUState* _parent;

}

@property (nonatomic,copy) id eventHandler;                       //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(id)initWithName:(id)arg1 parent:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(id)description;
-(void)invalidate;
@end

