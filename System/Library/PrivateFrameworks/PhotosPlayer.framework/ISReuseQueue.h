/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ISReuseQueue : NSObject {

	BOOL _reuseEnabled;
	/*^block*/id _objectBecomeReusableHandler;
	NSMutableDictionary* __objectCreationBlocksByReuseIdentifier;
	NSMutableDictionary* __reusableObjectsByReuseIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * _objectCreationBlocksByReuseIdentifier;              //@synthesize _objectCreationBlocksByReuseIdentifier=__objectCreationBlocksByReuseIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _reusableObjectsByReuseIdentifier;                   //@synthesize _reusableObjectsByReuseIdentifier=__reusableObjectsByReuseIdentifier - In the implementation block
@property (assign,getter=isReuseEnabled,nonatomic) BOOL reuseEnabled;                                     //@synthesize reuseEnabled=_reuseEnabled - In the implementation block
@property (nonatomic,copy) id objectBecomeReusableHandler;                                                //@synthesize objectBecomeReusableHandler=_objectBecomeReusableHandler - In the implementation block
-(NSMutableDictionary *)_objectCreationBlocksByReuseIdentifier;
-(NSMutableDictionary *)_reusableObjectsByReuseIdentifier;
-(BOOL)isReuseEnabled;
-(id)objectBecomeReusableHandler;
-(void)_enqueueObjectForReuse:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(void)registerObjectCreationBlock:(/*^block*/id)arg1 withReuseIdentifier:(id)arg2 ;
-(id)dequeueObjectWithReuseIdentifier:(id)arg1 isReused:(BOOL*)arg2 ;
-(void)enqueueObjectForReuse:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(void)discardReusableObjects;
-(void)setObjectBecomeReusableHandler:(id)arg1 ;
-(void)setReuseEnabled:(BOOL)arg1 ;
-(id)init;
@end

