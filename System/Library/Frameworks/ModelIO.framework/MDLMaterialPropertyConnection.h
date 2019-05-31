/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLNamed.h>

@class MDLMaterialProperty, NSString;

@interface MDLMaterialPropertyConnection : NSObject <MDLNamed> {

	MDLMaterialProperty* _input;
	MDLMaterialProperty* _output;
	NSString* _name;

}

@property (nonatomic,__weak,readonly) MDLMaterialProperty * output;              //@synthesize output=_output - In the implementation block
@property (nonatomic,__weak,readonly) MDLMaterialProperty * input;               //@synthesize input=_input - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
-(id)initWithOutput:(id)arg1 input:(id)arg2 ;
-(MDLMaterialProperty *)output;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(MDLMaterialProperty *)input;
@end

