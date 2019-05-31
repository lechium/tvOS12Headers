/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSMutableDictionary;

@interface VSBinder : NSObject {

	BOOL _establishmentProhibited;
	id _boundObject;
	NSCountedSet* _currentlyChangingBindings;
	NSMutableDictionary* _establishedBindings;

}

@property (nonatomic,__weak,readonly) id boundObject;                                                    //@synthesize boundObject=_boundObject - In the implementation block
@property (assign,getter=isEstablishmentProhibited,nonatomic) BOOL establishmentProhibited;              //@synthesize establishmentProhibited=_establishmentProhibited - In the implementation block
@property (nonatomic,retain) NSCountedSet * currentlyChangingBindings;                                   //@synthesize currentlyChangingBindings=_currentlyChangingBindings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * establishedBindings;                                  //@synthesize establishedBindings=_establishedBindings - In the implementation block
-(void)tearDownBinding:(id)arg1 ;
-(NSMutableDictionary *)establishedBindings;
-(BOOL)isEstablishmentProhibited;
-(id)_infoForBinding:(id)arg1 ;
-(NSCountedSet *)currentlyChangingBindings;
-(id)boundObject;
-(id)initWithBoundObject:(id)arg1 ;
-(void)establishBinding:(id)arg1 withInfo:(id)arg2 ;
-(void)setEstablishmentProhibited:(BOOL)arg1 ;
-(void)setCurrentlyChangingBindings:(NSCountedSet *)arg1 ;
-(void)setEstablishedBindings:(NSMutableDictionary *)arg1 ;
-(void)setValue:(id)arg1 forBinding:(id)arg2 ;
-(id)valueForBinding:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
