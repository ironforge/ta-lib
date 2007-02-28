package com.tictactec.ta.lib.meta.annotation;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Target(ElementType.PARAMETER)
@Retention(RetentionPolicy.RUNTIME)
public @interface IntegerRange {
    String  paramName();
    int     defaultValue();
    int     min();
    int     max();

    /* The following suggested value are used by Tech. Analysis software
     * doing parameter "optimization". Can be ignored by most user.
     */
    int  suggested_start();
    int  suggested_end();
    int  suggested_increment();
}
