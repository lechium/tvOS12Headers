/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class UIView, NSMutableDictionary, NSObject;

@interface UIViewAnimationInfo : NSObject {

	UIView* _owningView;
	/*^block*/id _invalidationBlock;
	NSMutableDictionary* _animatablePropertyStates;
	NSMutableDictionary* _presentationModifiers;
	NSMutableDictionary* _modifierGroupRequestHandlers;
	NSMutableDictionary* _isPartOfHigherOrderProperty;
	NSObject*<OS_dispatch_queue> _lockingQueue;

}

@property (__weak) UIView * owningView;                                                       //@synthesize owningView=_owningView - In the implementation block
@property (nonatomic,copy) id invalidationBlock;                                              //@synthesize invalidationBlock=_invalidationBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * animatablePropertyStates;                  //@synthesize animatablePropertyStates=_animatablePropertyStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * presentationModifiers;                     //@synthesize presentationModifiers=_presentationModifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * modifierGroupRequestHandlers;              //@synthesize modifierGroupRequestHandlers=_modifierGroupRequestHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * isPartOfHigherOrderProperty;               //@synthesize isPartOfHigherOrderProperty=_isPartOfHigherOrderProperty - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lockingQueue;                       //@synthesize lockingQueue=_lockingQueue - In the implementation block
-(UIView *)owningView;
-(void)setOwningView:(UIView *)arg1 ;
-(id)initWithView:(id)arg1 ;
-(NSMutableDictionary *)isPartOfHigherOrderProperty;
-(void)performWithLock:(/*^block*/id)arg1 ;
-(id)animatablePropertyStateForKey:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(BOOL)_canInvalidate;
-(void)setAnimatablePropertyState:(id)arg1 forKey:(id)arg2 ;
-(void)_invalidateIfPossible;
-(id)animatablePropertyStateKeys;
-(id)presentationModifierForKey:(id)arg1 ;
-(void)setPresentationModifier:(id)arg1 forKey:(id)arg2 ;
-(id)modifierGroupRequestHandlerForKey:(id)arg1 ;
-(void)setModifierGroupRequestHandler:(id)arg1 forKey:(id)arg2 ;
-(id)invalidationBlock;
-(void)setInvalidationBlock:(id)arg1 ;
-(NSMutableDictionary *)animatablePropertyStates;
-(void)setAnimatablePropertyStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)presentationModifiers;
-(void)setPresentationModifiers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)modifierGroupRequestHandlers;
-(void)setModifierGroupRequestHandlers:(NSMutableDictionary *)arg1 ;
-(void)setIsPartOfHigherOrderProperty:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)lockingQueue;
-(void)setLockingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

