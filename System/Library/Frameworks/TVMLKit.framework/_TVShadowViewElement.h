/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _TVShadowViewElementID, NSArray;

@interface _TVShadowViewElement : NSObject {

	_TVShadowViewElementID* _elementID;
	NSArray* _children;
	_TVShadowViewElement* _parent;

}

@property (nonatomic,copy) _TVShadowViewElementID * elementID;                  //@synthesize elementID=_elementID - In the implementation block
@property (nonatomic,copy) NSArray * children;                                  //@synthesize children=_children - In the implementation block
@property (assign,nonatomic,__weak) _TVShadowViewElement * parent;              //@synthesize parent=_parent - In the implementation block
-(void)setElementID:(_TVShadowViewElementID *)arg1 ;
-(_TVShadowViewElementID *)elementID;
-(void)setParent:(_TVShadowViewElement *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(_TVShadowViewElement *)parent;
-(NSArray *)children;
@end

