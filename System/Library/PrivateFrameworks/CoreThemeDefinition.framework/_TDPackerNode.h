/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@interface _TDPackerNode : NSObject {

	BOOL _used;
	BOOL _fit;
	_TDPackerNode* _down;
	_TDPackerNode* _right;
	void* _node;
	CGSize _size;
	CGPoint _origin;

}

@property (assign,nonatomic) BOOL used;                          //@synthesize used=_used - In the implementation block
@property (nonatomic,retain) _TDPackerNode * down;               //@synthesize down=_down - In the implementation block
@property (nonatomic,retain) _TDPackerNode * right;              //@synthesize right=_right - In the implementation block
@property (assign,nonatomic) BOOL fit;                           //@synthesize fit=_fit - In the implementation block
@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGPoint origin;                     //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) void* node;                         //@synthesize node=_node - In the implementation block
-(_TDPackerNode *)right;
-(void)setRight:(_TDPackerNode *)arg1 ;
-(void)setDown:(_TDPackerNode *)arg1 ;
-(_TDPackerNode *)down;
-(BOOL)fit;
-(void)setFit:(BOOL)arg1 ;
-(BOOL)used;
-(void)setUsed:(BOOL)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(CGPoint)origin;
-(void)setSize:(CGSize)arg1 ;
-(void)setOrigin:(CGPoint)arg1 ;
-(void*)node;
-(void)setNode:(void*)arg1 ;
@end

