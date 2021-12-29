#ifndef org_tartarus_snowball_SnowballProgram_H
#define org_tartarus_snowball_SnowballProgram_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace tartarus {
    namespace snowball {

      class SnowballProgram : public ::java::lang::Object {
       public:
        enum {
          mid_getCurrent_db9b55ba01e03e4b,
          mid_getCurrentBuffer_e11cf13c9a887534,
          mid_getCurrentBufferLength_9972fcc56b44e79d,
          mid_setCurrent_9fd2eb66a64e6f0f,
          mid_setCurrent_d7b537fea0247190,
          mid_stem_8454bd5aa23fd11e,
          mid_copy_from_d3a2d1edeac61f36,
          mid_in_grouping_4c2a9c7f32a6ad26,
          mid_eq_s_950cd4bb7cfc2401,
          mid_slice_from_4b7f5e38f806ae55,
          mid_find_among_9eaa2340c146e15f,
          mid_out_grouping_4c2a9c7f32a6ad26,
          mid_find_among_b_9eaa2340c146e15f,
          mid_slice_del_f2cc1bce94666404,
          mid_eq_s_b_950cd4bb7cfc2401,
          mid_out_grouping_b_4c2a9c7f32a6ad26,
          mid_in_grouping_b_4c2a9c7f32a6ad26,
          mid_out_range_fd32c163183a36f2,
          mid_out_range_b_fd32c163183a36f2,
          mid_in_range_b_fd32c163183a36f2,
          mid_eq_v_b_2cd6b83cb18fe093,
          mid_eq_v_2cd6b83cb18fe093,
          mid_in_range_fd32c163183a36f2,
          mid_replace_s_90717380b3ebecf2,
          mid_slice_check_f2cc1bce94666404,
          mid_slice_to_4c7a138e4607159b,
          mid_assign_to_4c7a138e4607159b,
          mid_insert_0dbb75d35b062243,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SnowballProgram(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SnowballProgram(const SnowballProgram& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getCurrent() const;
        JArray< jchar > getCurrentBuffer() const;
        jint getCurrentBufferLength() const;
        void setCurrent(const ::java::lang::String &) const;
        void setCurrent(const JArray< jchar > &, jint) const;
        jboolean stem() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      extern PyType_Def PY_TYPE_DEF(SnowballProgram);
      extern PyTypeObject *PY_TYPE(SnowballProgram);

      class t_SnowballProgram {
      public:
        PyObject_HEAD
        SnowballProgram object;
        static PyObject *wrap_Object(const SnowballProgram&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
