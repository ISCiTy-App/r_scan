//
//  RScanResult.h
//  r_scan
//
//  Created by 李鹏辉 on 2019/12/28.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "ZXingObjC.h"
#import "ZBarSDK.h"
@interface RScanResult : NSObject

+(NSDictionary*) toMap:(AVMetadataMachineReadableCodeObject*) obj;

+(NSNumber*) getType:(AVMetadataObjectType)type;

+(NSNumber*) getZXingType:(ZXBarcodeFormat)format;

+(NSNumber*) getZBarType:(zbar_symbol_type_t)format;
@end

