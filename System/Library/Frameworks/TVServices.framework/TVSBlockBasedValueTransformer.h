/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@interface TVSBlockBasedValueTransformer : NSValueTransformer {

	/*^block*/id _transformerBlock;

}

@property (nonatomic,copy) id transformerBlock;              //@synthesize transformerBlock=_transformerBlock - In the implementation block
-(id)transformedValue:(id)arg1 ;
-(id)transformerBlock;
-(void)setTransformerBlock:(id)arg1 ;
-(id)init;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

