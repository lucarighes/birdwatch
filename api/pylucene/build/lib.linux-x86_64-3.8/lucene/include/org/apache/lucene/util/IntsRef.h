#ifndef org_apache_lucene_util_IntsRef_H
#define org_apache_lucene_util_IntsRef_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Cloneable;
    class Comparable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IntsRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_040c4cd0390c5aff,
            mid_init$_11b52125bd016996,
            mid_clone_ce9cdfb58d7a482b,
            mid_compareTo_6660dc6cf0456da4,
            mid_deepCopyOf_1d6fd6a81b8a209a,
            mid_equals_8b72f2dcdde6fd1d,
            mid_hashCode_9972fcc56b44e79d,
            mid_intsEquals_2d12a172822a1ea0,
            mid_isValid_8454bd5aa23fd11e,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_ints,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntsRef(const IntsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jint > *EMPTY_INTS;

          JArray< jint > _get_ints() const;
          void _set_ints(const JArray< jint > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          IntsRef();
          IntsRef(jint);
          IntsRef(const JArray< jint > &, jint, jint);

          IntsRef clone() const;
          jint compareTo(const IntsRef &) const;
          static IntsRef deepCopyOf(const IntsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean intsEquals(const IntsRef &) const;
          jboolean isValid() const;
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
        extern PyType_Def PY_TYPE_DEF(IntsRef);
        extern PyTypeObject *PY_TYPE(IntsRef);

        class t_IntsRef {
        public:
          PyObject_HEAD
          IntsRef object;
          static PyObject *wrap_Object(const IntsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
