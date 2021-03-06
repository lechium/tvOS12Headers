/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLayoutConstraint.h>

@class NSString;

@interface CNBoundLayoutConstraint : NSLayoutConstraint {

	id _object;
	NSString* _keyPath;

}

@property (assign,nonatomic) id object;                     //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constantObject:(id)arg7 keyPath:(id)arg8 ;
-(void)unbind;
-(void)bindConstantToObject:(id)arg1 keyPath:(id)arg2 ;
-(void)_boundValueDidChange;
-(void)dealloc;
-(id)object;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setObject:(id)arg1 ;
@end

