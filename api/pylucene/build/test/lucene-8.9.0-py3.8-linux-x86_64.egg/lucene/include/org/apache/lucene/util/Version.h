#ifndef org_apache_lucene_util_Version_H
#define org_apache_lucene_util_Version_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Version;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class Version : public ::java::lang::Object {
         public:
          enum {
            mid_equals_8b72f2dcdde6fd1d,
            mid_fromBits_4fc78b18dd8d5969,
            mid_hashCode_9972fcc56b44e79d,
            mid_onOrAfter_34410a04cabe96cc,
            mid_parse_f137af40605ba4de,
            mid_parseLeniently_f137af40605ba4de,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_bugfix,
            fid_major,
            fid_minor,
            fid_prerelease,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Version(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Version(const Version& obj) : ::java::lang::Object(obj) {}

          static Version *LATEST;
          static Version *LUCENE_7_0_0;
          static Version *LUCENE_7_0_1;
          static Version *LUCENE_7_1_0;
          static Version *LUCENE_7_2_0;
          static Version *LUCENE_7_2_1;
          static Version *LUCENE_7_3_0;
          static Version *LUCENE_7_3_1;
          static Version *LUCENE_7_4_0;
          static Version *LUCENE_7_5_0;
          static Version *LUCENE_7_6_0;
          static Version *LUCENE_7_7_0;
          static Version *LUCENE_7_7_1;
          static Version *LUCENE_7_7_2;
          static Version *LUCENE_7_7_3;
          static Version *LUCENE_7_8_0;
          static Version *LUCENE_8_0_0;
          static Version *LUCENE_8_1_0;
          static Version *LUCENE_8_1_1;
          static Version *LUCENE_8_2_0;
          static Version *LUCENE_8_3_0;
          static Version *LUCENE_8_3_1;
          static Version *LUCENE_8_4_0;
          static Version *LUCENE_8_4_1;
          static Version *LUCENE_8_5_0;
          static Version *LUCENE_8_5_1;
          static Version *LUCENE_8_5_2;
          static Version *LUCENE_8_6_0;
          static Version *LUCENE_8_6_1;
          static Version *LUCENE_8_6_2;
          static Version *LUCENE_8_6_3;
          static Version *LUCENE_8_7_0;
          static Version *LUCENE_8_8_0;
          static Version *LUCENE_8_8_1;
          static Version *LUCENE_8_8_2;
          static Version *LUCENE_8_9_0;
          static Version *LUCENE_CURRENT;

          jint _get_bugfix() const;
          jint _get_major() const;
          jint _get_minor() const;
          jint _get_prerelease() const;

          jboolean equals(const ::java::lang::Object &) const;
          static Version fromBits(jint, jint, jint);
          jint hashCode() const;
          jboolean onOrAfter(const Version &) const;
          static Version parse(const ::java::lang::String &);
          static Version parseLeniently(const ::java::lang::String &);
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(Version);
        extern PyTypeObject *PY_TYPE(Version);

        class t_Version {
        public:
          PyObject_HEAD
          Version object;
          static PyObject *wrap_Object(const Version&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
